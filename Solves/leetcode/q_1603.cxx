class ParkingSystem {
public:
    int bx;
    int mx;
    int sx;
    ParkingSystem(int big, int medium, int small):bx(big),mx(medium),sx(small) {
    }
    
    bool addCar(int carType) {
        switch(carType)
        {
            case 1:
                if(bx>0)
                    bx--;
                else
                    return false;
                return true;
                break;
            case 2:
                if(mx>0)
                    mx--;
                else
                    return false;
                return true;
                break;
            default:
                if(sx>0)
                    sx--;
                else
                    return false;
                return true;
                break;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */