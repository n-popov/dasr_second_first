class Point2D
{
protected:
    double _x;
    double _y;

public:
    // Конструктор точки с заданными координатами
    Point2D(double x, double y): _x(x), _y(y) {
    }

    // Получить координату X точки    
    double x() const {
        return _x;
    }

    // Получить координату Y точки
    double y() const {
        return _y;
    }
};

#include <vector>
#include <deque>

class Polygone
{
public:
    // Конструктор, создаёт полигон из набора точек.
    // Точки передаются в порядке обхода полигона по контуру.
    Polygone(const std::vector<Point2D>& points) {
        std::copy(points.begin(), points.end(), std::back_inserter(this->points));
    }

    // Деструктор, если нужен

    // Возвращает площадь полигона
    double area() const;

    // Возвращает количество вершин полигона
    unsigned int size() const;

    // Возвращает N-ую вершину полигона
    // (вершины нумеруются в том же порядке, в котором были переданы)
    Point2D vertex(unsigned int N) const;
private:
    std::deque<Point2D> points;
};

unsigned int Polygone::size() const {
    return points.size();
}

Point2D Polygone::vertex(unsigned int N) const {
    return points[N];
}

double Polygone::area() const {
    auto answer = 0.;
    for(auto i = 1u; i < size() - 1u; i++) {
        auto a1 = vertex(i).x() - vertex(0).x();
        auto a2 = vertex(i).y() - vertex(0).y();
        auto b1 = vertex(i + 1).x() - vertex(0).x();
        auto b2 = vertex(i + 1).y() - vertex(0).y();
        answer += std::abs((a1 * b2 - a2 * b1) / 2);
    }
    return answer;
}


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<Point2D> points = {{-1.0, -1.0}, {-1.0, 1.0}, {1.0, 1.0}, {1.0, -1.0}};
    Polygone p(points);
    cout << "Points:" << endl;
    for(unsigned int i = 0; i < p.size(); i++) {
        cout << p.vertex(i).x() << " " << p.vertex(i).y() << endl;
    }
    cout << "Area: " << p.area() << endl;
    return 0;
}