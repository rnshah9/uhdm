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
 * File:   design.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef DESIGN_H
#define DESIGN_H

namespace UHDM {

  class design : public BaseClass {
  public:
    design(){}
    ~design() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    unsigned int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(unsigned int data) { uhdmParentType_ = data; }

    std::string get_vpiFile() const { return SymbolFactory::getSymbol(vpiFile_); }

    void set_vpiFile(std::string data) { vpiFile_ = SymbolFactory::make(data); }

    unsigned int get_vpiLineNo() const { return vpiLineNo_; }

    void set_vpiLineNo(unsigned int data) { vpiLineNo_ = data; }

    std::string get_vpiName() const { return SymbolFactory::getSymbol(vpiName_); }

    void set_vpiName(std::string data) { vpiName_ = SymbolFactory::make(data); }

    VectorOfmodule* get_allModules() const { return allModules_; }

    void set_allModules(VectorOfmodule* data) { allModules_ = data; }

    VectorOfmodule* get_topModules() const { return topModules_; }

    void set_topModules(VectorOfmodule* data) { topModules_ = data; }

    VectorOfprogram* get_allPrograms() const { return allPrograms_; }

    void set_allPrograms(VectorOfprogram* data) { allPrograms_ = data; }

    VectorOfpackage* get_allPackages() const { return allPackages_; }

    void set_allPackages(VectorOfpackage* data) { allPackages_ = data; }

    virtual unsigned int getUhdmType() { return uhdmdesign; }   
  private:
    
    BaseClass* vpiParent_;

    unsigned int uhdmParentType_;

    unsigned int vpiFile_;

    unsigned int vpiLineNo_;

    unsigned int vpiName_;

    VectorOfmodule* allModules_;

    VectorOfmodule* topModules_;

    VectorOfprogram* allPrograms_;

    VectorOfpackage* allPackages_;

  };

  class designFactory {
  friend Serializer;
  public:
  static design* make() {
    design* obj = new design();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<design*> objects_;
  };
 	      
  class VectorOfdesignFactory {
  friend Serializer;
  public:
  static std::vector<design*>* make() {
    std::vector<design*>* obj = new std::vector<design*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<design*>*> objects_;
  };

};

#endif

