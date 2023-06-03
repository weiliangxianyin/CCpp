#include <stdio.h>

struct address

{

	char street[20];

	int code;

	int zip;

};

struct contact

{

	char name[10];

	int age;

	char telephone[13];

	addr;

} ct;

int main(void)

{

	int i,count;

	count =0;

	for(                    )

	{

		scanf("%s%d%s",ct.name,&ct.age,ct.telephone);

		scanf("%s%d%d",           ,&ct.addr.code,&ct.addr.zip); //输入地址信息

		if(ct.age>=40)                     ;

	}

	printf("40岁以上人数：%d",count);

	return 0;

}
