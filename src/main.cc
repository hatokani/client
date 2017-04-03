#include "lib.h"

int main() {
  std::cout << "hatokani" << std::endl;
  char text[2048] = "dekita!!";
  Udp_Send udp = Udp_Send();
  while (true) {
    udp.send(12345, "239.192.1.2", text);
    std::cout << "deteruyo" << std::endl;
  }
}
