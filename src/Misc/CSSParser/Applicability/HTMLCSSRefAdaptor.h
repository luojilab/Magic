/*
 * HTMLCSSRefAdaptor.h
 *
 *  Created on: 2018-8-9
 *      Author: 1m0nster
 */

#ifndef HTMLCSSREFADAPTOR_H_
#define HTMLCSSREFADAPTOR_H_
#include "gumbo.h"
#include "SelectorsHeader.h"

namespace future {

class HTMLCSSRefAdaptor {
public:
    typedef GumboNode*** GumboNodesArrayPtr;
    typedef GumboNode** GumboNodesArray;
	HTMLCSSRefAdaptor();
	virtual ~HTMLCSSRefAdaptor();
    /**
     * Check Whether a selector can apply to the node in nodes
     * @param nodes the check nodes
     * @param selector the selector
     * @param potentialSize the size of nodes array
     * @note the nodes can be changed after the comparing.
     */
	static bool nodeAdaptToSelector(GumboNodesArrayPtr nodes, Selector* selector, int *potentialSize);
    
    /**
     * Clean all resource after the compare
     */
    static void CleanResource();

private:
	static bool nodeAdaptToIDSelector(GumboNodesArrayPtr node, IdSelector* selector, int *potentialSize);
	static bool nodeAdaptToClassSelector(GumboNodesArrayPtr node, ClassSelector* selector, int *potentialSize);
	static bool nodeAdaptToTypeSelector(GumboNodesArrayPtr node, TypeSelector* selector, int *potentialSize);
	static bool nodeAdaptToAttributeSelector(GumboNodesArrayPtr node, AttributeSelector* selector, int *potentialSize);
	static bool nodeAdaptToPseudoSelector(GumboNodesArrayPtr node, PseudoSelector* selector, int *potentialSize);
	static bool nodeAdaptToSequenceSelector(GumboNodesArrayPtr node, SequenceSelector* selector, int *potentialSize);
	static bool nodeAdaptToCombineSelector(GumboNodesArrayPtr node, CombineSelector* selector, int *potentialSize);
	static bool nodeAdaptToGroupSelector(GumboNodesArrayPtr node, GroupSelector* selector, int *potentialSize);
    static void updateNextNodes(const std::list<GumboNode *>&, GumboNodesArrayPtr arrayPtr, int *size);
};

}

#endif /* HTMLCSSREFADAPTOR_H_ */
