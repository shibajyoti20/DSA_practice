#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
    double x,y,z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream<< vertex.x <<", "<<vertex.y<<", "<<vertex.z;
    return stream;
}

int main()
{
    std::vector<Vertex>vertices;
    vertices.push_back({23,24,25});
    vertices.push_back({30,31,32});

    for(Vertex v:vertices)
    {
        std::cout<<v<<std::endl;
    }

    //The following step will not copy the array
    for(Vertex& v:vertices)
    {
        std::cout<<v<<std::endl;
    }

    vertices.clear();

    //std::cin.get();
    return 0;
}
