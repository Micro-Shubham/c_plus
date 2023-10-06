#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin, str);
    int vowel = 0, consonet = 0, words = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')

            vowel = vowel + 1;

        else if (str[i] == ' ')
            words = words + 1;
        else
            consonet = consonet + 1;
    }
    cout << vowel << " vowels" << endl;
    cout << words << " words" << endl;
    cout << consonet << " Consonent" << endl;
    return 0;
}