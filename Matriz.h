

class Matriz{
    
private:
    int nLinhas;
    int nColunas;
    
    float *matriz;
    
public:
    
    Matriz(int nL, int nC);
    ~Matriz();
    
    float getElem(int l, int c);
    
    void setElem(int l, int c, float elem);
    
};