#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <string>
#include <unordered_set>
#include <string.h>
#include "dictionary.h"
#include <vector>
#include <fstream>
#include <sstream>

#include <unordered_map>
#include <algorithm> 
#include <locale>

using namespace std;

Dictionary dictionary;
string UL[800];

void copie(const char *p, const char *car);
const char *LA();

char tokens[1000];
char input[1000];
vector<string> words;
int index = 0;
string pronounValue;
string verbValue;
string detValue;
string adjValue;
string nounValue;
string epsilonValue;

const char *car;
char *p1;

void PA();

void S();
void NP();
void VP();
void Det();
void Adj();
void N();
void PP();
void V();
void Adv();
void P();

void returns();
void accept(char *, char *);

struct node
{
    char label[80];
    char p[80];
    node *child1;
    node *child2;
    node *child3;
    node *child4;
};

struct Node
{
    string label;
    Node *left;
    Node *right;

    Node(const string &value) : label(value), left(nullptr), right(nullptr) {}
};

struct Keywords
{
    static const string pronoun;
    static const string verb;
    static const string det;
    static const string adj;
    static const string noun;
    static const string epsilon;
};

const string Keywords::pronoun = "pronoun";
const string Keywords::verb = "verb";
const string Keywords::det = "det";
const string Keywords::adj = "adj";
const string Keywords::noun = "noun";
const string Keywords::epsilon = "epsilon";

Node *createParseTree(const string &pronoun, const string &verb,
                      const string &det, const string &adj,
                      const string &noun, const string &epsilon)
{
    Node *root = new Node("S");
    root->left = new Node("NP");
    root->right = new Node("VP");

    root->left->left = new Node(pronoun);

    root->right->left = new Node(verb);
    root->right->right = new Node("NP");

    root->right->right->left = new Node(det);
    root->right->right->right = new Node("Det");

    root->right->right->right->left = new Node(adj);
    root->right->right->right->right = new Node("Adv");

    root->right->right->right->right->left = new Node(noun);
    root->right->right->right->right->right = new Node(epsilon);

    return root;
}

void inorderTraversal(Node *root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        cout << root->label << " ";
        inorderTraversal(root->right);
    }
}

string extractAdjective(Node *root)
{
    if (root != nullptr)
    {
        string leftResult = extractAdjective(root->left);
        if (!leftResult.empty() && leftResult != Keywords::epsilon)
        {
            cout << "Extracted Adjective: " << leftResult << endl;
            return leftResult;
        }

        if (root->label == Keywords::adj)
        {
            string extractedAdjective = root->left->label;
            cout << "Extracted Adjective: " << extractedAdjective << endl;
            return extractedAdjective; // Get the label of the left child
        }

        string rightResult = extractAdjective(root->right);
        if (!rightResult.empty() && rightResult != Keywords::epsilon)
        {
            cout << "Extracted Adjective: " << rightResult << endl;
            return rightResult;
        }
    }
    return adjValue;
}

void saveAdjectiveToCSV(const string &adjective)
{
    ofstream file("adjective.csv");
    if (file.is_open())
    {
        file << "Adjective\n";
        if (!adjective.empty())
        {
            file << "\"" << adjective << "\"\n";
        }
        file.close();
        cout << "Adjective saved to 'adjective.csv'" << endl;
    }
    else
    {
        cerr << "Error opening file for writing" << endl;
    }
}

void searchDictionary(const unordered_map<string, string>& dictionary, const string& word) {
    string lowercaseWord = word;
    transform(lowercaseWord.begin(), lowercaseWord.end(), lowercaseWord.begin(), ::tolower);


    auto it = dictionary.find(lowercaseWord);

    if (it != dictionary.end()) {
        cout << "English: " << it->first << "\nFrench: " << it->second << endl;
    }
    else {
        cout << "Translation not found for \"" << word << "\"." << endl;
    }
}

node *root;
node *nd;

int main()
{

    string sentence;
    cout << "Hello, How was your day ^-^\n";
    getline(std::cin, sentence);

    istringstream iss(sentence);

    string word;
    while (iss >> word)
    {
        words.push_back(word);
    }

    car = words[index].c_str();

    unordered_map<string, string> dictionary = {
       {"good", "bon"},
       {"bad day", "mauvais jour"},
       {"happy", "heureux"},

    };

  searchDictionary(dictionary, sentence);

    PA();

    

    return 0;
};

const char *LA()
{
    int state = 0;
    const char *p1;

    if (index == words.size())
    {
        cout << "End of Sentence!" << endl;

        Node *parseTreeRoot = createParseTree(pronounValue, verbValue, detValue, adjValue, nounValue, epsilonValue);

        cout << "Inorder Traversal: ";
        inorderTraversal(parseTreeRoot);
        cout << endl;

        string extractedAdjective = extractAdjective(parseTreeRoot);

        saveAdjectiveToCSV(extractedAdjective);
        exit(1);
    }

    car = words[index].c_str();

    switch (state)
    {
    case 0:
        if (*car == '.' || *car == '!' || *car == '?', *car == ',')
        {
            p1 = car;
            copie(p1, car);
            return "Punctuation";
        }
        else if (dictionary.isAdjective(car))
        {
            p1 = car;
            copie(p1, car);
            adjValue = car;
            return "Adjective";
        }
        else if (dictionary.isPronoun(car))
        {
            p1 = car;
            copie(p1, car);
            pronounValue = car;
            return "Pronoun";
        }
        else if (dictionary.isVerb(car))
        {
            p1 = car;
            copie(p1, car);
            verbValue = car;
            return "Verb";
        }
        else if (dictionary.isNoun(car))
        {
            p1 = car;
            copie(p1, car);
            nounValue = car;
            return "Noun";
        }
        else if (dictionary.isDeterminer(car))
        {
            p1 = car;
            copie(p1, car);
            detValue = car;
            return "Determiner";
        }
        else
        {
            cout << "Lexical error";
            exit(1);
        }
    }
    return nullptr;
}

void PA()
{

    root = new node;
    nd = root;
    strcpy_s(nd->label, "S");

    S();
};

void S()
{
    cout << "\nInside S ->" << endl;

    node *save_nd;
    nd->child3 = NULL;
    nd->child4 = NULL;
    strcpy_s(nd->p, "P012");

    save_nd = nd;
    nd->child1 = new node;
    strcpy_s(nd->child1->label, "NP");
    nd = nd->child1;
    NP();

    nd = save_nd;
    nd->child2 = new node;
    strcpy_s(nd->child2->label, "VP");
    nd = nd->child2;
    VP();
}

void NP()
{
    cout << "Inside NP -> " << endl;
    string st = LA();
    node *save_nd;
    strcpy_s(nd->p, "P34567");

    if (st == "Determiner")
    {
        save_nd = nd;
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "DET");
        nd = nd->child1;
        Det();
    }
    else if (st == "Adjective")
    {
        save_nd = nd;
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "ADJ");
        nd = nd->child1;
        Adj();
    }
    else if (st == "Noun" || st == "Pronoun")
    {
        save_nd = nd;
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "N");
        nd = nd->child1;
        N();
    }
    else
    {
        cout << "Syntax Error!";
        exit(1);
    }
}
void VP()
{
    cout << "Inside VP -> " << endl;
    node *save_nd;
    nd->child2 = NULL;
    nd->child3 = NULL;
    nd->child4 = NULL;
    strcpy_s(nd->p, "P1112");

    nd->child1 = new node;
    strcpy_s(nd->child1->label, "V");
    save_nd = nd;
    nd = nd->child1;
    V();
}

void Det()
{
    cout << "Inside Det -> " << car << ": " << LA() << endl;
    index++;
    string st = LA();
    node *save_nd;
    nd->child2 = NULL;
    nd->child3 = NULL;
    nd->child4 = NULL;
    strcpy_s(nd->p, "P1113");

    if (st == "Adjective")
    {
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "ADJ");
        save_nd = nd;
        nd = nd->child1;
        Adj();
    }
    else if (st == "Noun")
    {
        nd->child2 = new node;
        strcpy_s(nd->child1->label, "N");
        save_nd = nd;
        nd = nd->child1;
        N();
    }
    else
    {
        cout << "Syntax Error!";
        exit(1);
    }
}

void Adj()
{
    cout << "Inside Adj -> " << car << ": " << LA() << endl;
    index++;
    string st = LA();
    node *save_nd;
    nd->child2 = NULL;
    nd->child3 = NULL;
    nd->child4 = NULL;
    strcpy_s(nd->p, "P1114");

    if (st == "Noun")
    {
        save_nd = nd;
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "N");
        nd = nd->child1;
        N();
    }
    else
    {
        cout << "Syntax Error!";
        exit(1);
    }
}

void N()
{
    cout << "Inside N -> " << car << ": " << LA() << endl;
    index++;
    string st = LA();
    node *save_nd;
    strcpy_s(nd->p, "P8912");
    nd->child1 = new node;
    nd->child2 = NULL;
    nd->child3 = NULL;
    nd->child4 = NULL;

    if (st == "Adposition")
    {
        strcpy_s(nd->child1->label, "PP");
        save_nd = nd;
        nd = nd->child1;
        PP();
    }
    else if (st == "Verb")
    {
        return;
    }
    else
    {
        cout << "Syntax Error!" << endl;
        exit(1);
    }
}

void PP()
{
    cout << "Inside PP - > " << endl;
    index++;
    string st = LA();
    node *save_nd;
    strcpy_s(nd->p, "P8910");
    nd->child1 = new node;
    nd->child3 = NULL;
    nd->child4 = NULL;

    if (st == "Adposition")
    {
        strcpy_s(nd->child1->label, "Adp");
        save_nd = nd;
        nd = nd->child1;
        P();
    }
    else
    {
        cout << "Syntax Error!";
        exit(1);
    }
}

void V()
{
    cout << "Inside V -> " << car << ": " << LA() << endl;
    index++;
    string st = LA();

    node *save_nd;
    strcpy_s(nd->p, "P8919");
    nd->child1 = new node;
    nd->child3 = NULL;
    nd->child4 = NULL;

    if (st == "Determiner" || st == "Adjective" || st == "Noun" || st == "Pronoun")
    {
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "NP");
        save_nd = nd;
        nd = nd->child1;
        NP();
    }
    else if (st == "Adposition")
    {
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "PP");
        save_nd = nd;
        nd = nd->child1;
        PP();
    }
    else if (st == "Adverb")
    {
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "Adv");
        save_nd = nd;
        nd = nd->child1;
        Adv();
    }
    else
    {
        cout << "Syntax Error";
        exit(1);
    }
}

void P()
{
    cout << "Inside P -> " << car << ": " << LA() << endl;
    index++;
    string st = LA();

    node *save_nd;
    strcpy_s(nd->p, "P0237");
    nd->child1 = new node;
    nd->child3 = NULL;
    nd->child4 = NULL;

    if (st == "Determiner" || st == "Adjective" || st == "Noun" || st == "Pronoun")
    {
        nd->child1 = new node;
        strcpy_s(nd->child1->label, "NP");
        save_nd = nd;
        nd = nd->child1;
        NP();
    }
}

void Adv()
{
    cout << "Inside Adv -> " << car << ": " << LA() << endl;
    index++;
    return;
}

void copie(const char *p, const char *car)
{
    int i = 0;
    while (p < car)
    {
        tokens[i] = *p;
        p++;
        i++;
    }

    tokens[i] = '\0';
}

void returns()
{
    int i;
    for (i = 0; i < strlen(tokens); i++)
    {
        car--;
    }
}

