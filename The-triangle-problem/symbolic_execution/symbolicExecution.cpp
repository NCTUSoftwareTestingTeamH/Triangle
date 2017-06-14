#include"../triangle.h"
#include"../../../../klee_src/include/klee/klee.h"
using namespace std;

int main()
{
	int a,b,c;
	klee_make_symbolic(&a,sizeof(a),"a");
	klee_make_symbolic(&b,sizeof(b),"b");
	klee_make_symbolic(&c,sizeof(c),"c");
	triangle(a,b,c);
	return 0;
}
