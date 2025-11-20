// Pre-code (โค้ดบังคับ)
#include <stdio.h>

// 1. ประกาศโครงสร้าง Product
struct Product
{
    char name[50];
    int productId;
    float price;
};

int main()
{
    // 2. ประกาศตัวแปรของ struct
    struct Product item;

    // รับค่า productId (int), price (float), และ name (string)
    // NOTE: ควรใช้ scanf("%d %f %s", ...)
    if (scanf("%d %f %s", &item.productId, &item.price, item.name) != 3)
    {
        return 1;
    }

    // TODO: แสดงผลข้อมูลทั้งหมดในบรรทัดเดียวกัน
    printf("ID: %d, Price: %.2f, Name: %s\n", item.productId, item.price, item.name);

    return 0;
}