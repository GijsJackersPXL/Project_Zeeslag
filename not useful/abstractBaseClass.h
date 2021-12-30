class Doos {
   private:
        double lengte;
        double breedte;
        double hoogte;
      
    public:
        virtual double getVolume() = 0;
        int volume(int x, int y);
};