#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include<map>

using namespace std;

class Whisper{
public:
    int counter = 0;
    string toLower(string str){
        for(int i = 0; i < str.size(); i++)
            str[i] = tolower(str[i]);
        return str;
    }
    string toWhom(vector<string> usernames, string typed)
    {
        int i = 0, counter = 0;
        string username, compare, ret_value;
        for(i = 0; i < usernames.size(); i++){
            usernames[i] = toLower(usernames[i]);
        }
        typed = toLower(typed);
        map<int, string> usernames_map;
        map<int, string>::iterator itr;
        map<int, string>::reverse_iterator ritr;
        i = 0;
        while(i < usernames.size()){
            usernames_map[usernames[i].size()] = usernames[i];
            i++;
        }
        for(ritr = usernames_map.rbegin(); ritr != usernames_map.rend(); ++ritr)
            cout << ritr->second << ritr->first << endl;
        if(typed.find("/msg ") == 0){
            ritr = usernames_map.rbegin();
            while(ritr++ != usernames_map.rend()){
                compare = ritr->second;
                if(typed.size() == 5 + compare.size()){
                    if(typed.find(compare) == 5){
                        username = compare;
                        counter++;
                    }
                }
                else if(typed.size() > 5 + compare.size()){
                    if(typed.find(compare + " ") == 5){
                        username = compare;
                        counter++;
                    }
                }
                else
                    continue;
                if(counter == 1)
                    break;
            }
            if(counter == 1)
                ret_value = username;
            else
                ret_value = "user is not logged in";
        }
        else
            ret_value = "not a whisper";
        return ret_value;
    }
};

int main()
{
    int i, nCases;
    string input;
    vector<string> usernames;
    string typed;
    cin >> nCases;
    for(int i = 0; i < nCases; i++)
    {
        getline(cin, input);
        usernames.push_back(input);
    }
    getline(cin, typed);
    Whisper whisper;
    cout << whisper.toWhom(usernames, typed);
    return 0;
}
