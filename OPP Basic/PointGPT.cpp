#include <iostream>
using namespace std;
class Point {
private:
    float x;
    float y;
public:
    // Constructor không doi
    Point(){x=0;y=0;}

    // Constructor có doi day du
    Point(float xCoord, float yCoord) {x=xCoord; y=yCoord;}

    // Phuong thuc de thiet lap toa do diem
    void setCoordinates(float xCoord, float yCoord) {
        x = xCoord;
        y = yCoord;
    }
    // Phuong thuc de hien thi toa do diem
    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
    // Nhap toa do diem tu nguoi dùng bang ban phim
    void input() {
        cout << "Enter x coordinate: ";
        cin >> x;
        cout << "Enter y coordinate: ";
        cin >> y;
    }
};
class Line{
	private:
		Point DiemDau, DiemCuoi;
	
};
int main() {
    Point *listPoint;
    int n;
    cout<<"Nhap so diem: "; cin>>n;
    listPoint = new Point[n];
    for(int i=0;i<n;i++) {
    	cout<<"Input Point["<<i<<"]"<<endl;
    	listPoint[i].input();
	}
	cout<<"Danh sach diem la\n";
	for(int i=0;i<n;i++) {
    	listPoint[i].display();
	}
    return 0;
}

