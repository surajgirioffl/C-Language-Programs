//c language
//1) Program> #1) Need to know
//clear of concept about processor to got into else part
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
		{
			printf("%d is greater", a);
		}
	}
	else
	{
		printf("suraj is mahan");
	}

	/*processor else part mein tabhi jayega yadi uske respective "if" ka condition satisfy nahi hua ho. if parent or main "if" ka condition satisfy ho gaya aur "nested if" yani main if ke andar wale if ka condition satisfy nahi hua to processor nested if ke hi else part mein hi jayega. main if ke else part mein kabhi nahi jayega kyoki main if ka condition pahle hi satisfy ho chuka hai to else part me jane ka sawal hi nahi uthta.  ha nested if satisfy na ho to uske respective else part mein processor jata hai agar programmer else part me kuch nahi likha hai to koi result show nahi karga.*/
	/*agar jis jis nested if ka else part mein main if ka hi else part ka statement show karna hai to hum main if mein hi ek se jyada condition "&&" sign ka use karke likh dete.  isse ye fayada hota hai ki har bar nested if ke else part ko likhne se bach jate hai. lekin agar sabka else part ka statement different hain to koi upaye nahin hain tab to har ek if kar else likhkar uska statement bhi likhna parega.. GOT IT*/

	return 0;
}