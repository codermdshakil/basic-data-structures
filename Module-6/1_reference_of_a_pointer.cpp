#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)  // রেফারেন্স সহ পাস করা হচ্ছে।  // it's called refernce when we use & that means  p and ptr same when we change something in p then it's automatically change in ptr variable also
{
    // p = NULL;
    cout << &p << endl;
}

int main()
{

    int val = 10;
    int *ptr = &val;
    fun(ptr);

    // cout << val << endl;
    cout << &ptr << endl;
    return 0;
}

// reference : এইক্ষেত্রে পয়েন্টার এর reference আমরা function এ পাস করতেছি। এই কারণে function এ যা চেঞ্জ হবে , main এর pointer p তেও ঐসব চেঞ্জ দেখা যাবে।