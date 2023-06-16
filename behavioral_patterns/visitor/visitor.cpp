#include <iostream>
#include <vector>

class Dot;
class Circle;
class Rectangle;
class CompoundShape;

// Visitor interface
class Visitor {
public:
    virtual void visit_dot(Dot& dot) = 0;
    virtual void visit_circle(Circle& circle) = 0;
    virtual void visit_rectangle(Rectangle& rectangle) = 0;
    virtual void visit_compound_shape(CompoundShape& compoundShape) = 0;
};

// Shape interface
class Shape {
public:
    virtual void accept(Visitor& visitor) = 0;
};

// Concrete shape classes
class Dot : public Shape {
public:
    void accept(Visitor& visitor) override {
        visitor.visit_dot(*this);
    }
};

class Circle : public Shape {
public:
    void accept(Visitor& visitor) override {
        visitor.visit_circle(*this);
    }
};

class Rectangle : public Shape {
public:
    void accept(Visitor& visitor) override {
        visitor.visit_rectangle(*this);
    }
};

class CompoundShape : public Shape {
public:
    void accept(Visitor& visitor) override {
        visitor.visit_compound_shape(*this);
    }
};

// Concrete visitor class
class XMLExportVisitor : public Visitor {
public:
    void visit_dot(Dot& dot) override {
        std::cout << "Exporting Dot\n";
    }

    void visit_circle(Circle& circle) override {
        std::cout << "Exporting Circle\n";
    }

    void visit_rectangle(Rectangle& rectangle) override {
        std::cout << "Exporting Rectangle\n";
    }

    void visit_compound_shape(CompoundShape& compoundShape) override {
        std::cout << "Exporting CompoundShape\n";
    }
};

int main() {
    std::vector<Shape*> all_shapes;
    all_shapes.push_back(new Dot());
    all_shapes.push_back(new Circle());
    all_shapes.push_back(new Rectangle());
    all_shapes.push_back(new CompoundShape());

    XMLExportVisitor export_visitor;
    for (Shape* shape : all_shapes) {
        shape->accept(export_visitor);
    }

    for (Shape* shape : all_shapes) {
        delete shape;
    }

    return 0;
}
