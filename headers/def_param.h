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
 * File:   def_param.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef DEF_PARAM_H
#define DEF_PARAM_H

namespace UHDM {

  class def_param : public BaseClass {
  public:
    def_param(){}
    ~def_param() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(int data) { uhdmParentType_ = data; }

  private:
    
    BaseClass* vpiParent_;

    int uhdmParentType_;

  };

  class def_paramFactory {
  friend Serializer;
  public:
  static def_param* make() {
    def_param* obj = new def_param();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<def_param*> objects_;
  };
 	      
  class VectorOfdef_paramFactory {
  friend Serializer;
  public:
  static std::vector<def_param*>* make() {
    std::vector<def_param*>* obj = new std::vector<def_param*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<def_param*>*> objects_;
  };

};

#endif
