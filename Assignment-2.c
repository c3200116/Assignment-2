#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void pixelMean(float*r, float*g, float*b);

int main() {
    
    float image[5][5][3];
    int x, y, z;
    // Don’t change this srand() line!
    /*
    srand(0);
    
    for(y = 0; y < 5; y++) {
        for(x = 0; x < 5; x++) {
            image[x][y][0] = (float)rand()/(float)INT_MAX;
            image[x][y][1] = (float)rand()/(float)INT_MAX;
            image[x][y][2] = (float)rand()/(float)INT_MAX;
        }
    }  
    */
   
// ----------------------------------------
// Write your code below this comment block
// ----------------------------------------

    FILE *data;
    data=fopen("data.txt", "r");
      
    for (y=0;y<5;y++){
        for(x=0;x<5;x++){
            for (z=0;z<3;z++){
            fscanf(data, "%f", &image[x][y][z]);
            }
        }
    }



    for (x=0;x<5;x++){
        for (y=0;y<5;y++){
            pixelMean(&image[x][y][0], &image[x][y][1], &image[x][y][2]);
        }
    }

    //print values 
    x=0;
    y=0;
    for (y=0;y<2;y++){
        for (x=0;x<5;x++){
        printf("%d %d: %f %f %f\n", x, y, image[x][y][0], image[x][y][1], image[x][y][2]);
        }
    }

    


return 0;
}


void pixelMean(float*r, float*g, float*b){
    
    float tmp=0;
    
    tmp=(*r + *g + *b)/3;

    *r=tmp;
    *g=tmp;
    *b=tmp;
    //printf("%f\n", newImage[x][y][z]);
      
    }
    
