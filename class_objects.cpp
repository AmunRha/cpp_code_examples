#include<iostream>
#include<vector>
#include<stdlib.h>

typedef std::vector<std::vector<int>> MATRIX;

class matrix{
  
  private:
    int r, c;
    MATRIX elem;
    
    bool check_size(matrix m2){
        if(this->r == m2.get_row() && this->c == m2.get_col()){
            return true;
        }
        return false;
    }
    
  public:
  
    matrix(int r, int c, MATRIX elem){
        this->r = r;
        this->c = c;
        this->elem = elem;
    }
  
    int get_row(){
        return this->r;
    }
    
    int get_col(){
        return this->c;
    }
    
    int get_elem(int i, int j){
        return this->elem[i][j];
    }
    
    void print_matrix(){
        
        for(std::vector<int> row : this->elem){
            for(int i : row){
                std::cout<<i<<" ";
            }
            std::cout<<std::endl;
        }
    }
    
    bool compare(matrix m2){
        if(check_size(m2) == false){
            std::cout<<"Matrix size is not the same"<<std::endl;
            return false;
        }
        
        for(int i=0;i<this->r;i++){
            for(int j=0;j<this->c;j++){
                if(this->elem[i][j] != m2.get_elem(i, j)){
                    std::cout<<"Matrix elements are not the same"<<std::endl;
                    return false;
                }
            }
        }
        std::cout<<"Matrix are equal"<<std::endl;
        return true;
    }
    
    matrix add(matrix m2){
        if(check_size(m2) == false){
            std::cout<<"Matrix size is not the same"<<std::endl;
            exit(0);
        }
        
        MATRIX sum;
        sum.resize(this->r, std::vector<int>(this->c, 0));
        
        for(int i=0;i<this->r;i++){
            for(int j=0;j<this->c;j++){
                sum[i][j] = this->elem[i][j] + m2.get_elem(i, j);
            }
        }
        matrix res(this->r, this->c, sum);
        return res;
    }
  
};

int main(){
    
    MATRIX v({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
    MATRIX v2({{5, 10, 15}, {20, 25, 30}, {35, 40, 45}});
    matrix m1(3, 3, v);
    matrix m2(3, 3, v);
    matrix m3(3, 3, v2);
    std::cout<<"Displaying matrix..."<<std::endl;
    m1.print_matrix();
    std::cout<<std::endl;
    m2.print_matrix();
    
    std::cout<<"Compare matrix m1 m2"<<std::endl;
    m1.compare(m2);
    
    std::cout<<"Compare matrix m2 m3"<<std::endl;
    m2.compare(m3);
    
    std::cout<<"Adding matrix m1 m2"<<std::endl;
    matrix sum = m1.add(m2);
    
    std::cout<<"Displaying Sum..."<<std::endl;
    sum.print_matrix();
    
    return 0;
}
