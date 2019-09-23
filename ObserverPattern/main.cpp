#include <iostream>
#include "school.h"
#include "boy.h"
#include "girl.h"
#include "teacher.h"
int main()
{
	Boy boy;
	Girl girl;
	Teacher teacher;
	teacher.Add(&boy);
	teacher.Add(&girl);
	School school(&teacher);
	school.Decision();
	return 0;
}