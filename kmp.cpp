#include<bits/stdc++.h>
using namespace std;
int f[1000001];
void failure_function(string pattern)
{
    f[0] = 0;
    int l = 0, k = 1;
    int len = pattern.length();
    while (k < len)
    {
        if(pattern[l] == pattern[k])
            f[k++] = ++l;
        else
        {
            if(l)
                l = f[l - 1];
            else
                f[k++] = 0;
        }
    }
    return; 
}

void kmp(string text, string pattern)
{
    bool t = 0;
    int i = 0, j = 0;
    int lent = text.length();
    while(i < lent)
    {
        if(text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j)
                j = f[j - 1];
            else
                i ++;
        }
        if(j == pattern.length())
        {
            t = 1;
            break;
        }
    }
    if(t)
        cout<<"found"<<endl;
    else
        cout<<"Not found"<<endl;
}
int main()
{
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);
    
    kmp(text,pattern);
    return 0;
}