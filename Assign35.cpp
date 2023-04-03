// 1. Write a C++ program to demonstrate the addition of multiple types of data using generic
// functions or templates.
//  #include <iostream>
//  template <typename t>
//  t multiple(t a,t b)
//  {
//      return a*b;
//  }
//  using namespace std;

// int main()
// {
//     cout<<multiple<int>(2,3)<<endl;
//     cout<<multiple<float>(2.3,3.4)<<endl;
//     cout<<multiple<double>(2,0.3)<<endl;
//     return 0;
// }

// 2. Write a C++ Program to find Largest among two numbers using function template.
// #include <iostream>
// using namespace std;
// template <typename T>
// T Max(T a, T b)
// {
//     return (a > b) ? a : b;
// }
// int main()
// {
//     cout << Max<int>(4,5) << endl;
//     cout << Max<float>(4.9,4.5) << endl;
//     return 0;
// }

// 3. Write a C++ program to find the largest of three elements using a template.
// #include <iostream>
// using namespace std;
// template <typename T>
// T Max(T x,T y,T z)
// {
//    return (x > y) ? (x > z) ? x : z : (y > z) ? y : z;
// }

// int main()
// {
//     cout<<Max<int>(1,2,3)<<endl;
//     cout<<Max<int>(3,1,2)<<endl;
//     cout<<Max<int>(1,3,2)<<endl;
//     return 0;
// }

// 4. Write a C++ Program to Swap data using function template.
// #include <iostream>
// using namespace std;
// template <typename T = int>
// void Swap(T &x,T &y)
// {
//     x = x + y;
//     y = x - y;
//     x = x - y;
// }
// int main()
// {
//     int x = 5,y = 4;
//     float a = 2.01,b = 6.201;
//     cout<<"Before swap ::\n";
//     cout<<"x = "<<x<<endl;
//     cout<<"y = "<<y<<endl;
//     Swap(x,y);
//     cout<<"After swap ::\n";
//     cout<<"x = "<<x<<endl;
//     cout<<"y = "<<y<<endl;
//     cout<<"Before swap ::\n";
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
//     Swap(a,b);
//     cout<<"After swap ::\n";
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;    
//     return 0;
// }

// 5. Write a C++ Program to Add two numbers using function template.
// #include <iostream>
// using namespace std;
// template <typename T>
// T add(T a,T b)
// {
//     return a+b;
// }
// int main()
// {
//     cout<<add<int>(3,4)<<endl;
//     return 0;
// }

// 6. Write a C++ Program to find Sum of Array using function template.
// #include <iostream>
// using namespace std;
// template <typename T>
// T ArraySum(T a[],int size)
// {
//     T sum = a[0];
//     for (int i = 1; i < size; i++)
//     {
//         sum = sum + a[i];
//     }
//     return sum;
// }
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     double b[5] = {1.1,2.2,3.3,4.4,5.5};
//     cout<<ArraySum<int>(a,5)<<endl;
//     cout<<ArraySum<double>(b,5)<<endl;
//     return 0;
// }

// 7. Write a C++ Program of Templated class derived from Non-templated class.
// #include <iostream>
// using namespace std;
// class A
// {
//     protected:
//     int a = 10;
//     public:
// };
// template <class T>
// class B : public A
// {
//     T b = 20;
//     public:
//     void sum()
//     {
//         cout<<"a + b = "<<a+b<<endl;;
//     }
// };
 
// int main()
// {
//     B<int> obj;
//     obj.sum();
//     return 0;
// }

// 8. Write a C++ Program to implement push and pop methods from stack using template.
// #include <iostream>
// using namespace std;
// template <class T>
// class stack
// {
   
//     T top;
//     T a[100];
//     public:
//     stack();
//     void push(T x);
//     void pop();
//     T Top(); 
//     T empty();

// };

// template <class T>
// stack<T>::stack()
// {
//     top = -1;
// }

// template <class T>
// void stack<T>::push(T x)
// {
//     if (top == 99)
//     {
//         cout<<"Stack overflow";
//         return;
//     }
//     else
//     {
//        top++;
//        a[top] = x;
//     }
// }

// template<class T>
// void stack<T>::pop()
// {
//     if (top == -1)
//     {
//         cout<<"Stack underflow";
//     }
//     else
//     {
//         top--;
//     }
// }

// template<class T>
// T stack<T>::Top()
// {
//     if (top == 99)
//     {
//         cout<<"Stack overflow";

//     }
//     else if (top == -1)
//     {
//         cout<<"Stack underflow";
//     }
//     else
//     {
//         return a[top];
//     }
// }

// template <class T>
// T stack<T> :: empty()
// {
//    if (top == -1)
//    {
//      return 1;
//    }
//    else
//    {
//       return 0;
//    }
   
   
// }
// int main()
// {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5); 
//     while (!s.empty())
//     {
//        cout<<s.Top()<<endl;
//        s.pop();
//     }
//     return 0;
// }

// 9. Write a C++ Program to Perform Simple Addition Function Using Templates.
// #include <iostream>
// using namespace std;
// template <typename T>
// T add(T a,T b)
// {
//     return a+b;
// }
// int main()
// {
//     cout<<add<int>(2,3)<<endl;
//     cout<<add<float>(2.1,3.1)<<endl;
//     return 0;
// }

// 10. Write a C++ program to implement Hash Table using Template Class.

