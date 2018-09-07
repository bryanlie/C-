//
//  BinomialModel.hpp
//   
 
#ifndef BinomialModel_hpp
#define BinomialModel_hpp

#include <stdio.h> 



class BinomialModel {
public:
    BinomialModel(const BinomialModel &p);
    ~BinomialModel();
    BinomialModel &operator=(const BinomialModel &p);

    BinomialModel(double T, // expiration time
                  double S,   // stock price
                  double r,   // interest rate
                  double sigma,
                  double q,   // dividend yield
                  int n,      // numer of steps
                  bool call
    );

    double optionPriceForStrike(double K);
    virtual void computePriceStep(int i, int j, double K, vec &prices,
                                  double p_u, double p_d, double u);


protected:
    double getStockPrice() { return m_S; }
private:
    double m_T;     // expiration time
    double m_S;     // stock price
    double m_r;     // interest rate
    double m_sigma; // volatility
    double m_q;     // dividend yield
    int m_n;        // numer of steps
    bool m_call;    // true = call, false = put

};




class AmericanBinomialModel : public BinomialModel {
    AmericanBinomialModel(const BinomialModel &p);
    ~AmericanBinomialModel();
    AmericanBinomialModel &operator=(const BinomialModel &p);

    AmericanBinomialModel(double T, // expiration time
                  double S,   // stock price
                  double r,   // interest rate
                  double sigma,
                  double q,   // dividend yield
                  int n,      // numer of steps
                  bool call
                  );

    virtual void computePriceStep(int i, int j, double K, vec &prices,
                                  double p_u, double p_d, double u);
};



#endif /* BinomialModel_hpp */
