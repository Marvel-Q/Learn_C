//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Median(ElementType A[], int N);
//
//int main()
//{
//    ElementType A[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &A[i]);
//    printf("%.2f\n", Median(A, N));
//
//    return 0;
//}
////void sort(elementtype a[],int n)//����������       //Ч��̫��
////{
////    for (int i = 0; i < n; i++)
////    {
////        for (int j = i + 1; j < n; j++)
////        {
////            if (a[i]>a[j])//�ӵ͵�������
////            {
////                float temp = a[i];
////                a[i] = a[j];
////                a[j] = temp;
////            }
////        }
////    }
////}
//#include <stdlib.h> // ���qsort�����ͷ�ļ�
//
//int compare(const void* a, const void* b) 
//{
//    float x = *(float*)a;
//    float y = *(float*)b;
//    if (x > y) return 1;
//    if (x < y) return -1;
//    return 0;
//}
//
//ElementType Median(ElementType A[], int N)
//{
//    //void sort(A, N);
//    qsort(A, N, sizeof(ElementType), compare);//����
//    int a = N / 2; // ������λ����λ��
//    return A[a]; 
//}