//test configurations defined in <stl_config.h>
#include <iostream>
#include <vector>

//通过这些测试代码

using namespace std;

int main(){
    #if defined(__sgi)
    cout << "__sgi" << endl;
    #endif

    #if defined(__GNUC__)
    cout << "__GNUC__" << endl;
    cout << __GNUC__ << ' ' << __GUNC_MINOR__ <<endl;
    cout << __GLIBC__ << endl; 
    #endif

    #ifdef __STL_NO_DRAND48
    cout << "__STL_NO_DRAND48 defined" << endl;
    #else
    cout << "__STL_NO_DRAND48 undefined" << endl
    #endif

    #ifdef __STL__STATIC_TEMPLATE_MEMBER_BUG
    cout << "__STL__STATIC_TEMPLATE_MEMBER_BUG defined" << endl;
    #else
    cout << "__STL_STATIC_TEMPLATE_MEMBER_BUG undefined" << endl;
    #endif

    #ifdef __STL_CALSS_PARTIAL_SPECIALIZATION
    cout << "__STL_CLASS_PARTIAL_SPECIALIZATION defined" << endl;
    #else
    cout << "__STL_CLASS_PARTIAL_SPECIALIZATION undefined" << endl;
    #endif

}