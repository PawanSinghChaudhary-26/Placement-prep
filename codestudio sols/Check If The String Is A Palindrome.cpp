bool isValidChar(char ch)
{
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z') ||(ch>='0' && ch<='9'))
        return true;
    else
        return false;
}

char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z' || ch>=0 && ch<=9)
    {
        return ch;
    }
    else
    {
        return ch-'A'+'a';
    }
}
bool checkPalindrome(string s)
{
    int start=0,end=s.size()-1;
 
    while(start<=end)
    {
       if(!isValidChar(s[start]))
        { 
            start++;   
        }
        else if(!isValidChar(s[end]))
        {
          end--; 
        }
        else if(toLowerCase(s[start])!=toLowerCase(s[end]))
                 {
                     return 0;
                 }
        else{start++; end--;}
    }
            
 return 1; 
}