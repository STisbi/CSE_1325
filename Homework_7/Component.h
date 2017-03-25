#ifndef _COMPONENT_H
#define _COMPONENT_H

// This class will be one above the individual parts

class Component
{
	public:
		Component(  string a_name,
					Type a_type,
					string a_description,
					int a_part_num,
					int a_weight,
					int a_cost) :

					name(a_name),
					type(a_type),
					description(a_description),
					part_num(a_part_num),
					weight(a_weight),
					cost(a_cost) {}

	private:
		string name;
		Type type;
		string description;
		int part_num;
		int weight;
		int cost;
};
