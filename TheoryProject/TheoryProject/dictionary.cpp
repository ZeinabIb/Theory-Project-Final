#include <iostream>
#include <map>
#include <string>
#include "dictionary.h"

using namespace std;

bool Dictionary::isAdjective(string word)
{
    if (AdjectiveDictionary.find(word) != AdjectiveDictionary.end())
    {
        return true;
    }
    return false;
}
bool Dictionary::isDeterminer(string word)
{
    if (DeterminerDictionary.find(word) != DeterminerDictionary.end())
    {
        return true;
    }
    return false;
}
bool Dictionary::isPronoun(string word)
{
    if (PronounDictionary.find(word) != PronounDictionary.end())
    {
        return true;
    }
    return false;
}
bool Dictionary::isVerb(string word)
{
    if (VerbDictionary.find(word) != VerbDictionary.end())
    {
        return true;
    }
    return false;
}
bool Dictionary::isNoun(string word)
{
    if (NounDictionary.find(word) != NounDictionary.end())
    {
        return true;
    }
    return false;
}
bool Dictionary::isAdposition(string word)
{
    if (AdpositionDictionary.find(word) != AdpositionDictionary.end())
    {
        return true;
    }
    return false;
}
