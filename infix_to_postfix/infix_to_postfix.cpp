#include<bits/stdc++.h>
using namespace std;


int pres(char c) {
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void infixToPostfix (string s)
{
    stack<char>st;
    string result;
    for(int i = 0; i < s.length(); i++)
    {
        char c=s[i];
        if((c>='a' && c<='z') || (c>='A' && c<='A') || (c>='0' && c<='9'))
        {
            result+=c;
//           cout<<result<<"\n";
        }
        else if(c=='('){
            st.push('(');
        }
        else if(c==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                char tem=st.top();
                result+=tem;
                 cout<<result<<"\n";
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && ( pres(c)<pres(st.top()) ) )
            {
                char tem=st.top();
                result+=tem;
                cout<<result<<"\n";
                st.pop();
            }
            st.push(c);
        }

    }
    
   while(!st.empty())
    {
        char tem=st.top();
        result+=tem;
         cout<<result<<"\n";
        st.pop();
    }
    cout<<result;

}
int main()
{
    string exp = "a+((b+c)+(d+e)*f)/g)";
    cout<<"infix->"<<"a+((b+c)+(d+e)*f)/g)";
    infixToPostfix(exp);
    return 0;
}
