#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* 动态数组 */
    string s;
    s = "helloworld";
    string s1 = s + "load";
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl;

    // s1.push_back('s');
    
    if(s == s1)
    {
        cout<<"equal"<<endl;
    }
    else
    {
        cout<<"not equal"<<endl;
    }

    //截取字串
    cout<<"子串:"<<s1.substr(0,5)<<endl;
    string s3 = s1.substr(0,5);
    cout<<"s3:"<<s3<<endl;

    cout<<"第一个位置："<<s1.find_first_of("ello")<<endl;
    return 0;
}