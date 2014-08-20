/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ViewSwitcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }
namespace j2cpp { namespace android { namespace widget { namespace ViewSwitcher_ { class ViewFactory; } } } }
namespace j2cpp { namespace android { namespace widget { class ViewAnimator; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/FrameLayout.hpp>
#include <android/widget/ViewAnimator.hpp>
#include <android/widget/ViewSwitcher.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ViewSwitcher;
	namespace ViewSwitcher_ {

		class ViewFactory;
		class ViewFactory
			: public object<ViewFactory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ViewFactory(jobject jobj)
			: object<ViewFactory>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< android::view::View > makeView();
		}; //class ViewFactory

	} //namespace ViewSwitcher_

	class ViewSwitcher
		: public object<ViewSwitcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef ViewSwitcher_::ViewFactory ViewFactory;

		explicit ViewSwitcher(jobject jobj)
		: object<ViewSwitcher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::widget::FrameLayout>() const;
		operator local_ref<android::widget::ViewAnimator>() const;


		ViewSwitcher(local_ref< android::content::Context > const&);
		ViewSwitcher(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void addView(local_ref< android::view::View >  const&, jint, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		local_ref< android::view::View > getNextView();
		void setFactory(local_ref< android::widget::ViewSwitcher_::ViewFactory >  const&);
		void reset();
	}; //class ViewSwitcher

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_IMPL

namespace j2cpp {




android::widget::ViewSwitcher_::ViewFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::view::View > android::widget::ViewSwitcher_::ViewFactory::makeView()
{
	return call_method<
		android::widget::ViewSwitcher_::ViewFactory::J2CPP_CLASS_NAME,
		android::widget::ViewSwitcher_::ViewFactory::J2CPP_METHOD_NAME(0),
		android::widget::ViewSwitcher_::ViewFactory::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::view::View >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::ViewSwitcher_::ViewFactory,"android/widget/ViewSwitcher$ViewFactory")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher_::ViewFactory,0,"makeView","()Landroid/view/View;")



android::widget::ViewSwitcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::widget::FrameLayout>() const
{
	return local_ref<android::widget::FrameLayout>(get_jobject());
}

android::widget::ViewSwitcher::operator local_ref<android::widget::ViewAnimator>() const
{
	return local_ref<android::widget::ViewAnimator>(get_jobject());
}


android::widget::ViewSwitcher::ViewSwitcher(local_ref< android::content::Context > const &a0)
: object<android::widget::ViewSwitcher>(
	call_new_object<
		android::widget::ViewSwitcher::J2CPP_CLASS_NAME,
		android::widget::ViewSwitcher::J2CPP_METHOD_NAME(0),
		android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::ViewSwitcher::ViewSwitcher(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ViewSwitcher>(
	call_new_object<
		android::widget::ViewSwitcher::J2CPP_CLASS_NAME,
		android::widget::ViewSwitcher::J2CPP_METHOD_NAME(1),
		android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void android::widget::ViewSwitcher::addView(local_ref< android::view::View > const &a0, jint a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return call_method<
		android::widget::ViewSwitcher::J2CPP_CLASS_NAME,
		android::widget::ViewSwitcher::J2CPP_METHOD_NAME(2),
		android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::widget::ViewSwitcher::getNextView()
{
	return call_method<
		android::widget::ViewSwitcher::J2CPP_CLASS_NAME,
		android::widget::ViewSwitcher::J2CPP_METHOD_NAME(3),
		android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::View >
	>(get_jobject());
}

void android::widget::ViewSwitcher::setFactory(local_ref< android::widget::ViewSwitcher_::ViewFactory > const &a0)
{
	return call_method<
		android::widget::ViewSwitcher::J2CPP_CLASS_NAME,
		android::widget::ViewSwitcher::J2CPP_METHOD_NAME(4),
		android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::widget::ViewSwitcher::reset()
{
	return call_method<
		android::widget::ViewSwitcher::J2CPP_CLASS_NAME,
		android::widget::ViewSwitcher::J2CPP_METHOD_NAME(5),
		android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::ViewSwitcher,"android/widget/ViewSwitcher")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,2,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,3,"getNextView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,4,"setFactory","(Landroid/widget/ViewSwitcher$ViewFactory;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,5,"reset","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION