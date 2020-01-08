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
 * File:   instance_item.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef INSTANCE_ITEM_H
#define INSTANCE_ITEM_H

namespace UHDM {

  class instance_item : public BaseClass {
  public:
    // Implicit constructor used to initialize all members,
    // comment: instance_item();
    ~instance_item()  {}
    
    VectorOftask_func* get_task_func() const { return task_func_; }

    void set_task_func(VectorOftask_func* data) { task_func_ = data; }

    VectorOfnet* get_net() const { return net_; }

    void set_net(VectorOfnet* data) { net_ = data; }

    VectorOfarray_net* get_array_net() const { return array_net_; }

    void set_array_net(VectorOfarray_net* data) { array_net_ = data; }

    VectorOfvariables* get_variables() const { return variables_; }

    void set_variables(VectorOfvariables* data) { variables_ = data; }

    VectorOfparameters* get_parameters() const { return parameters_; }

    void set_parameters(VectorOfparameters* data) { parameters_ = data; }

    VectorOfassertion* get_assertion() const { return assertion_; }

    void set_assertion(VectorOfassertion* data) { assertion_ = data; }

    VectorOftypespec* get_typespecs() const { return typespecs_; }

    void set_typespecs(VectorOftypespec* data) { typespecs_ = data; }

    VectorOfclass_defn* get_class_defn() const { return class_defn_; }

    void set_class_defn(VectorOfclass_defn* data) { class_defn_ = data; }

    VectorOfprogram* get_programs() const { return programs_; }

    void set_programs(VectorOfprogram* data) { programs_ = data; }

    VectorOfprogram* get_program_arrays() const { return program_arrays_; }

    void set_program_arrays(VectorOfprogram* data) { program_arrays_ = data; }

    VectorOflogic_var* get_logic_var() const { return logic_var_; }

    void set_logic_var(VectorOflogic_var* data) { logic_var_ = data; }

    VectorOfarray_var* get_array_var() const { return array_var_; }

    void set_array_var(VectorOfarray_var* data) { array_var_ = data; }

    VectorOfnamed_event* get_named_event() const { return named_event_; }

    void set_named_event(VectorOfnamed_event* data) { named_event_ = data; }

    VectorOfnamed_event* get_named_event_array() const { return named_event_array_; }

    void set_named_event_array(VectorOfnamed_event* data) { named_event_array_ = data; }

    VectorOfspec_param* get_spec_param() const { return spec_param_; }

    void set_spec_param(VectorOfspec_param* data) { spec_param_ = data; }

    virtual unsigned int getUhdmType() { return uhdminstance_item; }   
  private:
    
    VectorOftask_func* task_func_;

    VectorOfnet* net_;

    VectorOfarray_net* array_net_;

    VectorOfvariables* variables_;

    VectorOfparameters* parameters_;

    VectorOfassertion* assertion_;

    VectorOftypespec* typespecs_;

    VectorOfclass_defn* class_defn_;

    VectorOfprogram* programs_;

    VectorOfprogram* program_arrays_;

    VectorOflogic_var* logic_var_;

    VectorOfarray_var* array_var_;

    VectorOfnamed_event* named_event_;

    VectorOfnamed_event* named_event_array_;

    VectorOfspec_param* spec_param_;

  };

  class instance_itemFactory {
  friend Serializer;
  public:
  static instance_item* make() {
    instance_item* obj = new instance_item();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<instance_item*> objects_;
  };
 	      
  class VectorOfinstance_itemFactory {
  friend Serializer;
  public:
  static std::vector<instance_item*>* make() {
    std::vector<instance_item*>* obj = new std::vector<instance_item*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<instance_item*>*> objects_;
  };

};

#endif

