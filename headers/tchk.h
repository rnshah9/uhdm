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
 * File:   tchk.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef TCHK_H
#define TCHK_H

namespace UHDM {

  class tchk : public BaseClass {
  public:
    tchk(){}
    ~tchk() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    unsigned int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(unsigned int data) { uhdmParentType_ = data; }

    std::string get_vpiFile() const { return SymbolFactory::getSymbol(vpiFile_); }

    void set_vpiFile(std::string data) { vpiFile_ = SymbolFactory::make(data); }

    unsigned int get_vpiLineNo() const { return vpiLineNo_; }

    void set_vpiLineNo(unsigned int data) { vpiLineNo_ = data; }

    virtual unsigned int getUhdmType() { return uhdmtchk; }   
  private:
    
    BaseClass* vpiParent_;

    unsigned int uhdmParentType_;

    unsigned int vpiFile_;

    unsigned int vpiLineNo_;

  };

  class tchkFactory {
  friend Serializer;
  public:
  static tchk* make() {
    tchk* obj = new tchk();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<tchk*> objects_;
  };
 	      
  class VectorOftchkFactory {
  friend Serializer;
  public:
  static std::vector<tchk*>* make() {
    std::vector<tchk*>* obj = new std::vector<tchk*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<tchk*>*> objects_;
  };

};

#endif

