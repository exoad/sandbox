#pragma once
#ifndef GEOMETRY_HH
#define GEOMETRY_HH

#define G_LL long long
#define G_LB long double

struct Pt
{
        G_LB x,y;
        Pt(G_LB x1,G_LB y1):x(x1),y(y1)
        {
        }

        Pt operator-(const Pt& other) const
        {
                return Pt(x-other.x,y-other.y);
        }

        Pt operator+(const Pt& other) const
        {
                return Pt(x+other.x,y+other.y);
        }

        G_LB cross(const Pt& p) const 
        {
                return x*p.y-y*p.x;
        }
        
        G_LB cross(const Pt& p,const Pt& q) const 
        {
                return (p-*this).cross(q-*this);
        }
        
        G_LL half() const 
        {
                return G_LL(y<0||(y==0&&x<0));
        }
};

#endif