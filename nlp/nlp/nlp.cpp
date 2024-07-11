#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> tokenize(const string& sentence) {
    istringstream iss(sentence);
    vector<string> tokens(istream_iterator<string>{iss},
        istream_iterator<string>());
    return tokens;
}

string toLowerCase(const string& text) {
    string result = text;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

string analyzeSentiment(const vector<string>& tokens) {
    vector<string> positiveWords = { "fascinating", "amazing", "exciting","good"};
    vector<string> negativeWords = { "boring", "disappointing", "bad" };

    int positiveCount = count_if(tokens.begin(), tokens.end(),
        [&](const string& token) {
            return find(positiveWords.begin(), positiveWords.end(), token) != positiveWords.end();
        });

    int negativeCount = count_if(tokens.begin(), tokens.end(),
        [&](const string& token) {
            return find(negativeWords.begin(), negativeWords.end(), token) != negativeWords.end();
        });

    if (positiveCount > negativeCount) {
        return "Positive sentiment";
    }
    else if (negativeCount > positiveCount) {
        return "Negative sentiment";
    }
    else {
        return "Neutral sentiment";
    }
}

int main() {

    ifstream inputFile("input.csv");
    if (!inputFile.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    string inputSentence;
    getline(inputFile, inputSentence);

    inputFile.close();

    vector<string> tokens = tokenize(inputSentence);

    transform(tokens.begin(), tokens.end(), tokens.begin(), toLowerCase);

    cout << "Processed Tokens:" << endl;
    for (const auto& token : tokens) {
        cout << token << endl;
    }

    string sentiment = analyzeSentiment(tokens);
    cout << "Sentiment: " << sentiment << endl;

    return 0;
}
