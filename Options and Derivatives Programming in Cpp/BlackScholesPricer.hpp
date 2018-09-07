//
//  BlackScholesPricer.hpp
//

#ifndef BlackScholesPricer_hpp
#define BlackScholesPricer_hpp

#include <boost/shared_ptr.hpp>
#include <ql/quantlib.hpp>

class BlackScholesPricer {
public:
   BlackScholesPricer(bool call, double price, double strike, double tau, double r, double fr, double vol);
   BlackScholesPricer(const BlackScholesPricer &p);
   ~BlackScholesPricer();
   BlackScholesPricer &operator=(const BlackScholesPricer &p);

   double value();
   double delta();
   double gamma();
   double theta();
   double vega();

private:
   double m_price;
   double m_strike;
   double m_tau;
   double m_rate;
   double m_frate;
   double m_vol;
   double m_isCall;

   boost::shared_ptr<QuantLib::BlackScholesCalculator> m_calc;
};


#endif /* BlackScholesPricer_hpp */
