#include <iostream>
#include <vector>

int main() {
    std::vector <int> vec{};
    int element;
    std::cout << "Enter a number. (-1) to output the result. (-2 shutdown)" << std::endl;
    std:: cin>> element;
    while (element!=-2){
        while (element!=-1){
            vec.push_back(element);
            std::cout << "Enter a number. (-1) to output the result. (-2 shutdown)" << std::endl;
            std:: cin>> element;
        }
        for (int i=0; i<vec.size(); i++){
            for (int j=0; j<vec.size()-i-1; j++){
                if (vec[j]>vec[j+1]){
                    int temp = vec [j];
                    vec[j]=vec[j+1];
                    vec[j+1]=temp;
                }
            }
        }
        std::cout << vec[4]<< std::endl;
        std::cout << "Enter a number. (-1) to output the result. (-2 shutdown)" << std::endl;
        std:: cin>> element;
    }

    return 0;
}
