#ifndef SDDS_POSIO_H_
#define SDDS_POSIO_H_
#include <iostream>

namespace sdds {
    class PosIO {
        public:
        virtual ~PosIO() {}
        virtual std::ostream& write(std::ostream &os) const = 0;
        virtual std::istream& read(std::istream &is) = 0;
        virtual std::ofstream& save(std::ofstream &of) const = 0;
        virtual std::ifstream& load(std::ifstream &ifs) = 0;
    };

    std::ostream& operator<<(std::ostream& os, const PosIO& pos);
    std::ofstream& operator<<(std::ofstream& of, const PosIO& pos);
    std::istream& operator>>(std::istream& in, PosIO& pos);
    std::ifstream& operator>>(std::ifstream& ifs, PosIO& pos);
}
#endif //!SDDS_POSIO_H_