#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string str ;
    char keyboard[100] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92,
                         'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                         'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47
                        } ;
    char keyboard2[100] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '{', '}',
                         'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ':', '"',
                         'Z', 'X', 'C', 'V', 'B', 'N', 'M', '<', '>', '?'
                        } ;

    while(getline(cin, str, '\n'))
    {
        for(int i = 0; i<str.size(); i++)
        {
            if((str[i] == ' ')||(str[i] == '\n'))
                cout << str[i] ;

            else
            {
                for(int j = 0; j <= 34; j++)
                {
                    if(str[i] == keyboard[j])
                    {
                        cout << keyboard[j-2] ;
                        break ;
                    }
                    else if(str[i] == keyboard2[j])
                    {
                        printf("%c",tolower(keyboard2[j-2]));
                        break ;
                    }
                }
            }

        }

        cout << endl ;
    }

    return 0 ;
}
