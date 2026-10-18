#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int sumOfElements(std::vector<std::vector<int>> matrix){
    int sum{0};

    for(int i = 0; i < matrix.size(); ++i){
        for(int j = 0; j < matrix[i].size(); ++j){
            if(j % 2 == 0 || i % 2 != 0){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main() {
        
    int row {};
    int column {};
    srand(static_cast<unsigned int>(time(0)));
    
    std::cout << "Enter a number of raws in your matrix: ";
    std::cin >> row;
    std::cout << "Enter a number of columns in your matrix: ";
    std::cin >> column;
    std::vector<std::vector<int>> matrix(row, std::vector<int>(column));

    std::cout << "Your matrix: " << std::endl;

    for(int i = 0; i < row; ++i){
        for(int j = 0; j < column; ++j){
            matrix[i][j] = rand() % 10;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    } 

    int result = sumOfElements(matrix);

    std::cout << result << std::endl;

    return 0;
}
