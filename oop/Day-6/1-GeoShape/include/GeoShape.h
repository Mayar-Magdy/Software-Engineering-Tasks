#ifndef GEOSHAPE_H
#define GEOSHAPE_H


class GeoShape
{
    public:
        GeoShape();
        GeoShape(int);
        GeoShape(int,int);
        void setDim1(int);
        int getDim1();
        void setDim2(int);
        int getDim2();
        float calcArea();

        ~GeoShape();

    protected:
        int dim1;
        int dim2;
    private:
};

#endif // GEOSHAPE_H
