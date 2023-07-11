#include <REGX52.H>

unsigned char *num[] = "0123456789"; 

void delay(int x)
{
	while(x--);	
} 
/***��LCDдһ������**/
void write_command(char command)
{
	P2_1 = 0;
	P2_2 = 0;
	P0 = command;
	P2_0 = 1;
	delay(100);//�ȴ����գ����Զ�״̬����
	P2_0 = 0;
	P2_1 = 1;
} 
/***��LCDдһ������**/
void write_data(char date)
{
	P2_1 = 0;
	P2_2 = 1;
	P0 = date;
	P2_0 = 1;
	delay(100);//�ȴ�����
	P2_0 = 0;
	P2_1 = 1;
} 
/**��ʼ��**/
void FLCD1602_init(void)
{
	write_command(0x38);//���У�ÿ��16���ַ���ÿ���ַ���5*7����
	write_command(0x0f);//�����ʾ����˸
	//write_command(0x0c);//��겻��ʾ
	write_command(0x06);//������ַ�����
}  
/**����**/
void FLCD1602_clear()
{
	write_command(0x01);
	write_command(0x02);
}
/**��LCDд�ַ���**/
void display_string(char *p)
{
	while(*p)//�ַ��ǿ�
	{
		write_data(*p);//д�ַ�
		p++;             //����ָ��++
	}
}
/**��LCDд���ֱ���**/
void display_num(char x)
{
	write_data(num[x / 10]);
	write_data(num[x % 10]);
}
/**��λ**/
void gotoxy(char y,char x)
{
	if(y == 1)
	write_command(0x40 + x);
	else if(y == 2)
	write_command(0x80 + 0x40 + x);
}				

