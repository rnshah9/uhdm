/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   assertion.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef ASSERTION_H
#define ASSERTION_H

namespace UHDM {

  class assertion : public BaseClass {
  public:
    // Implicit constructor used to initialize all members,
    // comment: assertion();
    ~assertion()  {}
    
    virtual unsigned int getUhdmType() { return uhdmassertion; }   
  private:
    
  };

  class assertionFactory {
  friend Serializer;
  public:
  static assertion* make() {
    assertion* obj = new assertion();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<assertion*> objects_;
  };
 	      
  class VectorOfassertionFactory {
  friend Serializer;
  public:
  static std::vector<assertion*>* make() {
    std::vector<assertion*>* obj = new std::vector<assertion*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<assertion*>*> objects_;
  };

};

#endif
