/*
  Created by Kille
*/
#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    string word;
    int count = 0;
    ifstream file("input.txt");
    vector<int> inputs;

    while(file.eof() == false)
    {
        file >> word;
        int num = stoi(word);
        inputs.push_back(num);
    }
    file.close();

    for(int i = 1; i < inputs.size(); i++)
    {
        if (inputs[i] > inputs[i-1])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
