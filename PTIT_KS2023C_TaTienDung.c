#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	int m;
	printf("Nhap so cot: ");
	scanf("%d", &m);
	int numbers[n][m];
	int min, max;
	int sumNumbers;
	
	
	do{
		printf("\n********************MENU********************\n");
		printf("1. Nhap gia tri cac phan tu cua mang \n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran \n");
		printf("3. Tinh so luong cac phan tu le chia het cho 5 trong mang\n");
		printf("4. In ra cac phan tu co gia tri lon nhat, nho nhat nam tren duong bien, duong cheo chinh, duong cheo phu \n");
		printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan theo dong cua mang \n");
		printf("6. Tinh tong cac phan tu la so nguyen to trong mang \n");
		printf("7. Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan \n");
		printf("8. Nhap gia tri mot mang 1 chieu gom n phan tu va chi so cot muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
		printf("9.Thoat \n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
			printf("1. Nhap gia tri cac phan tu cua mang: \n");
			for(int i=0;i<n;i++){
				for(int j = 0; j<m;j++){
					printf("numbers[%d] [%d]", i,j);
					scanf ("%d", &numbers[i][j]);	
				}
			}
			break;
		case 2:
			printf ("Gia tri cac phan tu trong mang theo ma tran la: \n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d\t", numbers [i][j]);
					
				}
				printf("\n");
			}
			printf("\n");
			break;
		case 3:
			printf("So luong cac phan tu le chia het cho 5 la: \n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if (numbers[i][j] % 2!=0 && numbers[i][j] % 5 == 0){
						printf("%d\t", numbers[i][j]);
					}
				}
			}
			break;
		case 4:
			printf("Cac phan tu nam tren duong bien la: \n");
			for (int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if (i==0 || i==n-1 || j==0 || j==m-1){
						printf("%d\t", numbers[i][j]);
					}
				}	
			}
			min= numbers[0][0];
			max = numbers[0][0];
			for (int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(min>numbers[i][j]){
						min = numbers[i][j];
					}
					if(max<numbers[i][j]){
						max = numbers[i][j];
					}
				}
			}
			printf ("Gia tri lon nhat la: %d - Gia tri nho nhat la: %d\n ", max, min);
			if (n==m){
				printf("Cac phan tu nam tren duong cheo chinh la: ");
				for (int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if (i==j){
							printf("%d\t", numbers[i][j]);
						}
					}
					
				}
				min= numbers[0][0];
			max = numbers[0][0];
			for (int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(min>numbers[i][j]){
						min = numbers[i][j];
					}
					if(max<numbers[i][j]){
						max = numbers[i][j];
					}
				}
			}
			printf ("Gia tri lon nhat la: %d - Gia tri nho nhat la: %d\n ", max, min);
				
				printf("Cac phan tu nam tren duong cheo phu la: ");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i+j==n-1){
							printf("%d\t", numbers[i][j]);
						}
					}
				}
				min= numbers[0][0];
			max = numbers[0][0];
			for (int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(min>numbers[i][j]){
						min = numbers[i][j];
					}
					if(max<numbers[i][j]){
						max = numbers[i][j];
					}
				}
			}
			printf ("Gia tri lon nhat la: %d - Gia tri nho nhat la: %d\n ", max, min);
			
			}
			else{
				printf("Day khong phai la ma tran vuong, khong co cheo chinh va cheo phu\n");
			}
			break;
		case 5:
			printf("Em khong biet lam. Em xin loi thay T_T");
			break;
		case 6:
			printf("Em khong biet lam. Em xin loi thay T_T");
			break;
		case 7:
			printf("Em khong biet lam. Em xin loi thay T_T");
			break;
		case 8:
			printf("Em khong biet lam. Em xin loi thay T_T");
			break;
		case 9:
			printf("Ket thuc chuong trinh\n");
			exit(0);
			break;
		default:
			printf("Lua chon khong hop le. Vui long chon lai tu 1-9!\n");	
		}
		
	}
	while (1==1);{
		
	}

}
