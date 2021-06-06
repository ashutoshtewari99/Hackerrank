#include<stdio.h>
#include<math.h>
const char Palash = 'X';
int main()
{
	char input;
    float rlength, rbreadth, rarea, halfaxis1, halfaxis2, earea, ts1, ts2,ts3, s, tarea,p;
	int j=1;
	printf("\nChoose object type\n(R)Rectangle\n(E)Ellipse\n(D)Triangle\n(X)Exit\n");
	// scanf("%c",&input);
	while(scanf("%c",&input) && input != Palash)
	{ 
        switch(input)
		{
			case 'R': 
                    printf("\nEnter Length And Breadth: ");
					scanf("%f%f",&rlength,&rbreadth);
					rarea=rlength*rbreadth;
					printf("\nF=%f",rarea);
			break;
			
			case 'E': 
                    printf("\nEnter Half Axis of Ellipse: ");
					scanf("%f%f",&halfaxis1,&halfaxis2);
					earea=3.14*halfaxis1*halfaxis2;
					printf("\nF=%f",earea);
			break;
			
			case 'D': 
                    printf("\nEnter sides of triangle: ");
					scanf("%f%f%f",&ts1,&ts2,&ts3);
					s= (ts1+ts2+ts3)/2;
					p= s*((s-ts1)*(s-ts2)*(s-ts3));
					tarea= sqrt(p);
					printf("\nF=%f",tarea);
			break;
			
			// case 'X': 
            //         j=0;
            //         break;
        }
			printf("\nChoose object type\n(R)Rectangle\n(E)Ellipse\n(D)Triangle\n(X)Exit\n");
	        scanf("%c",&input);
						
	}
    //system ("pause");
return 0;	
}