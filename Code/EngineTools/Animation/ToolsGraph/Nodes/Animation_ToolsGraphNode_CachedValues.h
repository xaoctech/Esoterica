#pragma once
#include "Animation_ToolsGraphNode.h"
#include "Engine/Animation/Graph/Nodes/Animation_RuntimeGraphNode_CachedValues.h"

//-------------------------------------------------------------------------

namespace EE::Animation::GraphNodes
{
    class CachedBoolToolsNode final : public FlowToolsNode
    {
        EE_REGISTER_TYPE( CachedBoolToolsNode );

    public:

        virtual void Initialize( VisualGraph::BaseGraph* pParent ) override;

        virtual char const* GetTypeName() const override { return "Cached Bool"; }
        virtual char const* GetCategory() const override { return "Values/Bool"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::BlendTree, GraphType::ValueTree, GraphType::TransitionTree ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
        virtual void DrawInfoText( VisualGraph::DrawContext const& ctx ) override;

    private:

        EE_EXPOSE CachedValueMode          m_mode = CachedValueMode::OnEntry;
    };

    //-------------------------------------------------------------------------

    class CachedIDToolsNode final : public FlowToolsNode
    {
        EE_REGISTER_TYPE( CachedIDToolsNode );

    public:

        virtual void Initialize( VisualGraph::BaseGraph* pParent ) override;

        virtual char const* GetTypeName() const override { return "Cached ID"; }
        virtual char const* GetCategory() const override { return "Values/ID"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::BlendTree, GraphType::ValueTree, GraphType::TransitionTree ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
        virtual void DrawInfoText( VisualGraph::DrawContext const& ctx ) override;

    private:

        EE_EXPOSE CachedValueMode          m_mode = CachedValueMode::OnEntry;
    };

    //-------------------------------------------------------------------------
    
    class CachedIntToolsNode final : public FlowToolsNode
    {
        EE_REGISTER_TYPE( CachedIntToolsNode );

    public:

        virtual void Initialize( VisualGraph::BaseGraph* pParent ) override;

        virtual char const* GetTypeName() const override { return "Cached Int"; }
        virtual char const* GetCategory() const override { return "Values/Int"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::BlendTree, GraphType::ValueTree, GraphType::TransitionTree ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
        virtual void DrawInfoText( VisualGraph::DrawContext const& ctx ) override;

    private:

        EE_EXPOSE CachedValueMode          m_mode = CachedValueMode::OnEntry;
    };

    //-------------------------------------------------------------------------

    class CachedFloatToolsNode final : public FlowToolsNode
    {
        EE_REGISTER_TYPE( CachedFloatToolsNode );

    public:

        virtual void Initialize( VisualGraph::BaseGraph* pParent ) override;

        virtual char const* GetTypeName() const override { return "Cached Float"; }
        virtual char const* GetCategory() const override { return "Values/Float"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::BlendTree, GraphType::ValueTree, GraphType::TransitionTree ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
        virtual void DrawInfoText( VisualGraph::DrawContext const& ctx ) override;

    private:

        EE_EXPOSE CachedValueMode          m_mode = CachedValueMode::OnEntry;
    };

    //-------------------------------------------------------------------------

    class CachedVectorToolsNode final : public FlowToolsNode
    {
        EE_REGISTER_TYPE( CachedVectorToolsNode );

    public:

        virtual void Initialize( VisualGraph::BaseGraph* pParent ) override;

        virtual char const* GetTypeName() const override { return "Cached Vector"; }
        virtual char const* GetCategory() const override { return "Values/Vector"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::BlendTree, GraphType::ValueTree, GraphType::TransitionTree ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
        virtual void DrawInfoText( VisualGraph::DrawContext const& ctx ) override;

    private:

        EE_EXPOSE CachedValueMode          m_mode = CachedValueMode::OnEntry;
    };

    //-------------------------------------------------------------------------

    class CachedTargetToolsNode final : public FlowToolsNode
    {
        EE_REGISTER_TYPE( CachedTargetToolsNode );

    public:

        virtual void Initialize( VisualGraph::BaseGraph* pParent ) override;

        virtual char const* GetTypeName() const override { return "Cached Target"; }
        virtual char const* GetCategory() const override { return "Values/Target"; }
        virtual TBitFlags<GraphType> GetAllowedParentGraphTypes() const override { return TBitFlags<GraphType>( GraphType::BlendTree, GraphType::ValueTree, GraphType::TransitionTree ); }
        virtual int16_t Compile( GraphCompilationContext& context ) const override;
        virtual void DrawInfoText( VisualGraph::DrawContext const& ctx ) override;

    private:

        EE_EXPOSE CachedValueMode          m_mode = CachedValueMode::OnEntry;
    };
}