//Billboard
//By: Max Yang
//Time: 1 hour and 45 minutes
/*
The logic for the problem took a long time for me to map out on paper 
and was also very easy to mix up the x and y values for each coordinate
of the rectangles.
*/
#include <stdio.h>
#include <cstdlib>

int main(){
    FILE * In = fopen("billboard.in", "r");

    int first_x1, first_y1, first_x2, first_y2;
    fscanf(In, "%d %d %d %d", &first_x1, &first_y1, &first_x2, &first_y2);

    int second_x1, second_y1, second_x2, second_y2;
    fscanf(In, "%d %d %d %d", &second_x1, &second_y1, &second_x2, &second_y2);

    int truck_x1, truck_y1, truck_x2, truck_y2;
    fscanf(In, "%d %d %d %d", &truck_x1, &truck_y1, &truck_x2, &truck_y2);

    fclose(In);

    //Initial Area
    int first_area = abs(first_x1-first_x2)* abs(first_y1-first_y2);
    int second_area = abs(second_x1-second_x2)* abs(second_y1-second_y2);

    //Area of First Board
    //Top-left corner of truck
    int first_overlap=0;
    if((truck_x1<first_x2&&truck_x1>first_x1) && (truck_y2<first_y2&&truck_y2>first_y2)){
            first_overlap = (truck_y2-first_y1)*(first_x2-truck_x1);
    }
    //Bottom-right corner of truck
    if((truck_x2<first_x2&&truck_x2>first_x1) && (truck_y1<first_y2&&truck_y1>first_y1)){
            first_overlap = (truck_x2-first_x1)*(first_y2-truck_y1);
    }

    //Area of Second Board
    //Top-left corner of truck
    int second_overlap=0;
    if((truck_x1<second_x2&&truck_x1>second_x1) && (truck_y2<second_y2&&truck_y2>second_y2)){
            second_overlap = (truck_y2-second_y1)*(second_x2-truck_x1);
    }
    //Bottom-right corner of truck
    if((truck_x2<second_x2&&truck_x2>second_x1) && (truck_y1<second_y2&&truck_y1>second_y1)){
            second_overlap = (truck_x2-second_x1)*(second_y2-truck_y1);
    }

    int total_first, total_second;
    total_first = first_area - first_overlap;
    total_second = second_area - second_overlap;

    int total_visible = total_first+total_second;

    if(first_overlap!=0||second_overlap!=0){
        total_visible++;
    }

    FILE * Out = fopen("billboard.out", "w");
    fprintf(Out,"%d\n", total_visible);
    fclose(Out);
}
