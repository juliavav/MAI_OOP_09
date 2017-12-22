#ifndef PRYAM_H
#define PRYAM_H
#include "Figure.h"

class Pryam: public Figure{
 public:
  Pryam();
  Pryam(const Pryam &obj);
  Pryam(double i, double j);
  Pryam(std::istream &is);
  void setParams(std::istream &is);
  double getSquare() override;
  void Print() override;
  bool operator==(const Pryam&) const;
  Pryam operator=(const Pryam&);
  Pryam operator++();
  friend std::ostream& operator<<(std::ostream&, const Pryam&);

  ~Pryam() {};
  int type() {return 3;}
 private:
  double side_a;
  double side_b;
};

#endif
