#include <iostream>

class RealImage {
public:
    RealImage(int i) 
    {
        m_id = i;
        std::cout << "ctor:" << m_id << '\n';
    }

    ~RealImage() 
    {
        std::cout << "dtor:" << m_id << '\n';
    }

    void draw() 
    {
        std::cout << "drawing image" << m_id << '\n';
    }

private:
    int m_id;
};

class Image {
public:
    Image() {
        m_id = s_next++;
        m_the_real_thing = nullptr;
    }

    ~Image() {
        delete m_the_real_thing;
    }

    void draw() {
        if (!m_the_real_thing)
            m_the_real_thing = new RealImage(m_id);
        m_the_real_thing->draw();
    }

private:
    RealImage* m_the_real_thing;
    int m_id;
    static int s_next;
};

int Image::s_next = 1;

int main() {
    Image images[5];
    for (;;) {
        int i;
        std::cout << "Exit[0], Image[1-5]: ";
        std::cin >> i;
        
        if (i == 0){
            break;
        } else {
            images[i - 1].draw();
        }
    }

    return 0;
}
