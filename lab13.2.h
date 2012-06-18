#include <math.h>

class Triangle {
    private:
            float a, b, c;
    public:
            Triangle(float x) {
                a=1; b=x; c=x;
            }
            
            Triangle(float x, float y) {
                a=x; b=y; c=a+b-3;
            }
            
            Triangle(float x, float y, float z) {
                a=x; b=y; c=z;
            }
            
            Triangle() {
                printf("Vvedite a, b, c: ");
                scanf("%f %f %f", &a, &b, &c);
            }
            
            float Perimeter() {
                return a+b+c;
            }
            
            float Square(float p) {
                return sqrt((p/2)*((p/2)-a)*((p/2)-b)*((p/2)-c));
            }
            
            void Print() {
                printf("(a=%0.1f, b=%0.1f, c=%0.1f)\n", a, b, c);
            }
            
            ~Triangle() {
                printf("Triangle deleted!");
            }
    
};
