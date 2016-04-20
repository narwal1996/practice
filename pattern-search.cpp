#include<iostream>

using namespace std;

// Naive Search
// O(m*(n-m+1)) ; n -> text.length(), m -> pattern.length().
int Search(string text, string pattern)
{

    for(int i = 0; i < text.length()-pattern.length(); i++)
    {
        int j;
        for(j = 0; j < pattern.length(); j++)
            if(text[i+j] != pattern[j])
                break;
        if(j == pattern.length())
            cout << i << endl;
    }

}

// KMP matching algorithm -> O(n).
int SearchKMP(string text, string pattern)
{



}

int main()
{

    string text, pattern;
    cin >> text >> pattern;
    Search(text, pattern);
    return 0;

}
