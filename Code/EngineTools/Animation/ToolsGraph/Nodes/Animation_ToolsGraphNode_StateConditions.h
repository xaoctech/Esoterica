#pragma once
#include "Animation_ToolsGraphNode.h"
#include "Engine/Animation/Graph/Nodes/Animation_RuntimeGraphNode_StateConditions.h"

//-------------------------------------------------------------------------

namespace EE::Animation
{
    class StateCompletedConditionToolsNode final : public FlowToolsNode
    {
        EE_REFLECT_TYPE( StateCompletedConditionToolsNode );

    public:

        StateCompletedConditionToolsNode();

        virtual char const* GetTypeName() const override { return "State Completed"; }
        virtual char const* GetCategory() const override { return "Transitions"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::TransitionConduit ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
    };

    //-------------------------------------------------------------------------

    class TimeConditionToolsNode final : public FlowToolsNode
    {
        EE_REFLECT_TYPE( TimeConditionToolsNode );

    public:

        TimeConditionToolsNode();

        virtual char const* GetTypeName() const override { return "Time Condition"; }
        virtual char const* GetCategory() const override { return "Transitions"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::TransitionConduit ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
        virtual void DrawInfoText( NodeGraph::DrawContext const& ctx, NodeGraph::UserContext* pUserContext ) override;

    private:

        EE_REFLECT() float                                    m_comparand = 0.0f;
        EE_REFLECT() TimeConditionNode::ComparisonType        m_type = TimeConditionNode::ComparisonType::ElapsedTime;
        EE_REFLECT() TimeConditionNode::Operator              m_operator = TimeConditionNode::Operator::LessThan;
    };
}